// fichero 43673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43673;

Registro43673 crear_registro43673(int id) {
    Registro43673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
