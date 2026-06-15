// fichero 16297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16297;

Registro16297 crear_registro16297(int id) {
    Registro16297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
