// fichero 22265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22265;

Registro22265 crear_registro22265(int id) {
    Registro22265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
