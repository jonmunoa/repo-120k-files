// fichero 13469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13469;

Registro13469 crear_registro13469(int id) {
    Registro13469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
