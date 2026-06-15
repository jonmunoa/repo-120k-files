// fichero 40337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40337;

Registro40337 crear_registro40337(int id) {
    Registro40337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
