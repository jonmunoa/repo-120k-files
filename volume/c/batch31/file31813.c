// fichero 31813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31813;

Registro31813 crear_registro31813(int id) {
    Registro31813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
