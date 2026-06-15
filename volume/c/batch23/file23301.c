// fichero 23301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23301;

Registro23301 crear_registro23301(int id) {
    Registro23301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
