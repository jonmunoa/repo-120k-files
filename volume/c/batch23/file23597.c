// fichero 23597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23597;

Registro23597 crear_registro23597(int id) {
    Registro23597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
