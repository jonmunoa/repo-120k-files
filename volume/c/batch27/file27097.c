// fichero 27097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27097;

Registro27097 crear_registro27097(int id) {
    Registro27097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
