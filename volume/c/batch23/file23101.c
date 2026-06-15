// fichero 23101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23101;

Registro23101 crear_registro23101(int id) {
    Registro23101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
