// fichero 597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro597;

Registro597 crear_registro597(int id) {
    Registro597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
