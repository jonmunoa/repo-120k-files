// fichero 7729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7729;

Registro7729 crear_registro7729(int id) {
    Registro7729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
