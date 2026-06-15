// fichero 23089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23089;

Registro23089 crear_registro23089(int id) {
    Registro23089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
