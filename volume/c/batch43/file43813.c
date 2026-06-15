// fichero 43813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43813;

Registro43813 crear_registro43813(int id) {
    Registro43813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
