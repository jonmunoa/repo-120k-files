// fichero 23965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23965;

Registro23965 crear_registro23965(int id) {
    Registro23965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
