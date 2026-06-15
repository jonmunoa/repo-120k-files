// fichero 2097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2097;

Registro2097 crear_registro2097(int id) {
    Registro2097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
