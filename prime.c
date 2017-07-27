using System;

using System.Collections.Generic;

using System.Linq;

using System.Text;

namespace PrimeNumber

{

    class Program

    {

        static void Main(string[] args)

        {

            bool Prime = true;

            Console.WriteLine("Prime Numbers : ");

            for (int i = 2; i <= 100; i++)

            {

                for (int j = 2; j <= 100; j++)

                {

 

                    if (i != j && i % j == 0)

                    {

                        Prime = false;

                        break;

                    }

 

                }

                if (Prime)

                {

                    Console.Write("\t" +i);

                }

                Prime = true;

            }

            Console.ReadKey();

        }

    }

}
