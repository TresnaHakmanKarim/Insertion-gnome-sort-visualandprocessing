static final float goldenRatio = (1+sqrt(5))/2;

Sort sort;

void setup() {
  size(350,350);
  textAlign(RIGHT,TOP);
  

  
  sort = new InsertionSort(randomIntArray(50));
}

void draw() {
  background(1);
  fill(255);
  noStroke();
  
  text(int(frameRate)+" fps\n"+sort.num,width,0);
  
  sort.sortStep();
  sort.drawArray();
}

int[] randomIntArray(int n) {
  int[] data = new int[n];  
  for (int i = 0; i < n; i++)
    data[i] = int(random(n));
    
  return data;
}

void keyPressed() {
  if (key == '-') frameRate(frameRate/goldenRatio);
  else if (key == '=') frameRate(frameRate*goldenRatio);
  if (frameRate < 1) frameRate(1);
  
  // SORTING ALGORITHM SELECTION
  char c = Character.toUpperCase(key);
  switch(c) {

    case '2':  sort = new InsertionSort(randomIntArray(50)); return;

  }
  
}
