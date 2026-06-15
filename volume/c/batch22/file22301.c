// fichero 22301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22301;

Registro22301 crear_registro22301(int id) {
    Registro22301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
