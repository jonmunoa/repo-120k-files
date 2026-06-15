// fichero 14389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14389;

Registro14389 crear_registro14389(int id) {
    Registro14389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
