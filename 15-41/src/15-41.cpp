#include"Query.hpp"
#include"TextQuery.hpp"
using namespace std;
string make_plural(size_t ctr,const string &word,const string &ending)
{
	return (ctr==1)?word:word+ending;
}
ifstream& open_file(ifstream& in,const string& str)
{
	in.open(str.c_str());
	return in;
}
void print_results(const set<TextQuery::line_no>& locs,const TextQuery &file)
{
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size=locs.size();
	cout<<"match occurs"<<size<<" "<<make_plural(size,"time","s")<<endl;
	line_nums::const_iterator it=locs.begin();
	for(;it!=locs.end();++it){
		cout<<"\t(line"<<(*it)+1<<")"<<file.text_line(*it)<<endl;
	}
}
int main(int argc,char** argv)
{
	ifstream infile;
	if(argc<2||!open_file(infile,argv[1])){
		cerr<<"No input file!"<<endl;
		return -1;
	}
	TextQuery file;
	file.read_file(infile);
	typedef set<TextQuery::line_no> line_nums;
	Query q=Query("fiery")&Query("brid")|Query("wind");
	const line_nums &locs=q.eval(file);
	cout<<"\nExecuted Query for: "<<q<<endl;
	print_results(locs,file);
	return 0;
}
