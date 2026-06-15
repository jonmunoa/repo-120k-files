// fichero 43709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43709;

Registro43709 crear_registro43709(int id) {
    Registro43709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
