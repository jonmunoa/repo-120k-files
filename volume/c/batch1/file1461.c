// fichero 1461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1461;

Registro1461 crear_registro1461(int id) {
    Registro1461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
