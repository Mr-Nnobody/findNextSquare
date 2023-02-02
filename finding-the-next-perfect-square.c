
long int findNextSquare(long int sq){ 
long int n = sqrt(sq), NextSquare;
  double t = sqrt(sq);
  if(t != n){
  return -1;
  }
  else
   NextSquare = (n + 1)*(n + 1);
    return NextSquare;
}