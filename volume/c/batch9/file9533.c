// fichero 9533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9533;

Registro9533 crear_registro9533(int id) {
    Registro9533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
