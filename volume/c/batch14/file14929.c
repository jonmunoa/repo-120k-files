// fichero 14929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14929;

Registro14929 crear_registro14929(int id) {
    Registro14929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
