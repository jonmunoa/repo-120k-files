// fichero 4389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4389;

Registro4389 crear_registro4389(int id) {
    Registro4389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
