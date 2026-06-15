// fichero 49425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49425;

Registro49425 crear_registro49425(int id) {
    Registro49425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
