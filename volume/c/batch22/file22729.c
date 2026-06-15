// fichero 22729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22729;

Registro22729 crear_registro22729(int id) {
    Registro22729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
