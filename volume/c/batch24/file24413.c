// fichero 24413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24413;

Registro24413 crear_registro24413(int id) {
    Registro24413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
