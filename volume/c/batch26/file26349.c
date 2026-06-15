// fichero 26349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26349;

Registro26349 crear_registro26349(int id) {
    Registro26349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
