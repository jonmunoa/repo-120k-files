// fichero 43389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43389;

Registro43389 crear_registro43389(int id) {
    Registro43389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
