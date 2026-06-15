// fichero 43373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43373;

Registro43373 crear_registro43373(int id) {
    Registro43373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
