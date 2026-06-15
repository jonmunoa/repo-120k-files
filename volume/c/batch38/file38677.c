// fichero 38677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38677;

Registro38677 crear_registro38677(int id) {
    Registro38677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
