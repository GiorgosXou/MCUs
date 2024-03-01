#define pf(...) printf(__VA_ARGS__); fflush(stdout);
void setup () 
{
  // put your setup code here, to run once:
  Serial.begin (115200);
  pinMode (BUILTIN_LED, 
           0x03);
  digitalWrite (BUILTIN_LED, 
                0);
  pf ("int sz\n  --> %zu\n",
      sizeof(int));
  pf ("float sz\n  --> %zu\n",
      sizeof(float));
  pf ("double sz\n  --> %zu\n",
      sizeof(double));
  pf ("long int sz\n  --> %zu\n",
      sizeof(long int));
  pf ("long long sz\n  --> %zu\n",
      sizeof(long long));
  pf ("char sz\n  --> %zu\n",
      sizeof(char));
  pf ("ptr sz\n  --> %zu\n",
      sizeof(void* ));
  pf ("int64_t sz\n  --> %zu\n",
      sizeof(int64_t));
  pf ("int32_t sz\n  --> %zu\n",
      sizeof(int32_t));
  pf ("int16_t sz\n  --> %zu\n",
      sizeof(int16_t));
  pf ("uint64_t sz\n  --> %zu\n",
      sizeof(uint64_t));
  pf ("uint32_t sz\n  --> %zu\n",
      sizeof(uint32_t));
  pf ("uint16_t sz\n  --> %zu\n",
      sizeof(int16_t));
}

void loop () 
{
  // put your main code here, to run repeatedly:
  delay(10000);
}
