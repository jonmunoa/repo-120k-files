// fichero 23409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23409;

Registro23409 crear_registro23409(int id) {
    Registro23409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
