// fichero 23833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23833;

Registro23833 crear_registro23833(int id) {
    Registro23833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
