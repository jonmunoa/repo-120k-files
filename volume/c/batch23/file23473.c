// fichero 23473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23473;

Registro23473 crear_registro23473(int id) {
    Registro23473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
