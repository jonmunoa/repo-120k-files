// fichero 23189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23189;

Registro23189 crear_registro23189(int id) {
    Registro23189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
