// fichero 16141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16141;

Registro16141 crear_registro16141(int id) {
    Registro16141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
