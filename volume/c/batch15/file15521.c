// fichero 15521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15521;

Registro15521 crear_registro15521(int id) {
    Registro15521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
