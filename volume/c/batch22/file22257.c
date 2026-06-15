// fichero 22257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22257;

Registro22257 crear_registro22257(int id) {
    Registro22257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
