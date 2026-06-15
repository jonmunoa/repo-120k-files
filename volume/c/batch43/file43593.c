// fichero 43593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43593;

Registro43593 crear_registro43593(int id) {
    Registro43593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
