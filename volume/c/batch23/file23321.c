// fichero 23321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23321;

Registro23321 crear_registro23321(int id) {
    Registro23321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
