// fichero 22937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22937;

Registro22937 crear_registro22937(int id) {
    Registro22937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
