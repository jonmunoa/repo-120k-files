// fichero 4301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4301;

Registro4301 crear_registro4301(int id) {
    Registro4301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
