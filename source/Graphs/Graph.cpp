 #include "Graph.hpp"
 
 
 Graph::Graph(unsigned int n){
     int ver = n;
     int var_val = 0;
     for(int i = 0; i<n; i++){
         vec.push_back(0);
     }
 }

  /** Destructor
   * Clear the memory used by the adjacency matrix and node value array.
   */
 Graph::~Graph(){
     vec.clear;
     vec.shrink_to_fit();
     edge.shrink_to_fit();
 }

  /** node_count()
   * Returns the number of nodes in the graph.
   */
  unsigned int Graph::node_count(){
      return 1;
  }

  /** edge_count()
   * Returns the number of edges in the graph.
   * Two nodes connected to one another counts as two edges.
   */
  unsigned int Graph::edge_count(){
      return edge.sise();
  }

  /** get_value(unsigned int v)
   * Returns the value associated with node v.
   */
  int Graph::get_value(unsigned int v){
      return vec[v];
  }

  /** set_value(unsigned int v, int val)
   * Sets the value of node v to val.
   */
  void Graph::set_value(unsigned int v, int val){
      vec.at(v) = val;
  }

  /** weight(unsigned int v, unsigned int w)
   * Returns the weight of the edge from node v to node w.
   * Returns 0 if the edge does not exist.
   */
  int Graph::weight(unsigned int v, unsigned int w){
      if(!has_edge){
          return 0;
      }else{
          int counter = 0;
          for(int i =0; i<vac.size; i++ ){
              if(vec.at(i)==v || vec.at(i)==w){
                  for(int j = i+1;j<j<vec.sise(); j++){
                      counter++;
                  }
              }
          }
      }
  }

  /** has_edge(unsigned int v, unsigned int w)
   * Returns true if there is an edge from node v to node w.
   * Note that has_edge(v, w) does not imply has_edge(w, v).
   */
  bool Graph::has_edge(unsigned int v, unsigned int w){
      for(int i = 0; i<edge.size();i++){
          if(edge.at(i).at(0)==v && edge.at(i).at(1)==w){
              return true;
          }
      }
      return 1;
  }

  /** add_edge(unsigned int v, unsigned int w, int weight)
   * Adds an edge from node v to node w to the graph, with the given weight.
   * If no weight is specified, it defaults to 1.
   * Self-connected nodes are not permitted, so an error is thrown when v == w.
   * Will throw an error if weight == 0. Use remove_edge instead.
   */
  void Graph::add_edge(unsigned int v, unsigned int w, int weight){
      if(has_edge){
          return;
      }else{
          std::vector<int> vec2;
          vec2.push_back(v)
          vec2.push_back(w)
          edge.push_back(vec2)
      }
  }

  /** remove_edge(unsigned int v, unsigned int w)
   * Removes the edge from node v to node w from the graph.
   * Will throw an error if the edge does not exist.
   */
  void remove_edge(unsigned int v, unsigned int w){
      if(!has_edge){
          return;
      }else{
          for(int i = 0; i<edge.sise();i++){
              if(edge.at(i).at(0)== v && edge.at(i).at(1) == w){
                 edge.at(i).clear(); 
              }

          }
      }
  }

  /** neighbors(unsigned int v)
   * Returns a vector containing the indices of every neighbor of the node v.
   * A node w is defined to be a neighbor of v iff there exists an edge
   * from v to w.
   */
  std::vector<int> neighbors(unsigned int v){
      std::vector<int> vec2;
      for(int i =0;i<edge.sise(); i++){
          if(edge.at(i).at(0) == v){
              for(int j= 0; j)
          }
      }

  }
};