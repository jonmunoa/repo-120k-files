// fichero 14961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14961;

Registro14961 crear_registro14961(int id) {
    Registro14961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
