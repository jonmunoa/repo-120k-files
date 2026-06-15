// fichero 32461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32461;

Registro32461 crear_registro32461(int id) {
    Registro32461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
