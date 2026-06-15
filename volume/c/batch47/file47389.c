// fichero 47389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47389;

Registro47389 crear_registro47389(int id) {
    Registro47389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
