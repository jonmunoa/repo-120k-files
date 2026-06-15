// fichero 13581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13581;

Registro13581 crear_registro13581(int id) {
    Registro13581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
