// fichero 43581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43581;

Registro43581 crear_registro43581(int id) {
    Registro43581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
