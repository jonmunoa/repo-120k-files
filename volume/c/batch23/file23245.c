// fichero 23245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23245;

Registro23245 crear_registro23245(int id) {
    Registro23245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
