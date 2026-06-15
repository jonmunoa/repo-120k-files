// fichero 14409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14409;

Registro14409 crear_registro14409(int id) {
    Registro14409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
