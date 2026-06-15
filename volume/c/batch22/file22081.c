// fichero 22081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22081;

Registro22081 crear_registro22081(int id) {
    Registro22081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
