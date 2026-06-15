// fichero 5813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5813;

Registro5813 crear_registro5813(int id) {
    Registro5813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
