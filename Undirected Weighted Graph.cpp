#include<bits/stdc++.h>
using namespace std;

/* The  undirected weighted graph is represented via an adjacency list and each entry of a list further contains a vector and further each entry 
   of a vector contains a pair of int and int representing the adjacent node and weight of the corresponding edge.*/
int main(){
	
	
	cout<<"Enter the number of vertices or nodes"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the number of edges"<<endl;
	int m;
	cin>>m;
	
	
	vector <pair <int,int> > adjacencyList[n];
	
	
	for(int i=0;i<n;i++){
		
		if(i==1)
			cout<<"Enter the total nodes adjacent to "<<i<<"st node"<<endl;
		else if(i==2)
			cout<<"Enter the total nodes adjacent to "<<i<<"nd node"<<endl;
		else if(i==3)
			cout<<"Enter the total nodes adjacent to "<<i<<"rd node"<<endl;
		else
			cout<<"Enter the total nodes adjacent to "<<i<<"th node"<<endl;

		int u;
		cin>>u;
		
		for(int j=0;j<u;j++){
		
			cout<<"Enter the "<<j+1<<" node adjacent to "<<i<<" node"<<endl;
			int v;
			cin>>v;
			cout<<"Enter the weight associated with the "<<i<<"-----"<<v<<" edge"<<endl;
			int wt;
			cin>>wt;
			
			
			adjacencyList[i].push_back({v,wt});
			
		}
		
	}
	
	for(int i=0;i<n;i++){
		
		vector<pair<int,int> > l = adjacencyList[i];
		cout<<i<<"-->";
		for(int i=0;i<l.size();i++){
			pair<int,int> p = l[i];
			cout<<" ("<<p.first<<","<<p.second<<") ";
		}
		cout<<endl;
		
		/*  For Instance the output for 4 vertices and 5 edges  will be shown like
				0--> (1,3)  (2,4)
				1--> (0,3)  (2,5)  (3,1)
				2--> (0,4)  (1,5)  (3,2)
				3--> (1,1)  (2,2)
				
				Here 0,1,2,3 are the nodes of the graph
				0-->(1,3) represents that 0 has an edge with of weight 3 units
		*/
	}
	return 0;
}
