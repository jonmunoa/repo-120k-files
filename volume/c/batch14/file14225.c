// fichero 14225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14225;

Registro14225 crear_registro14225(int id) {
    Registro14225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
