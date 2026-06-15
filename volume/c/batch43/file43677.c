// fichero 43677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43677;

Registro43677 crear_registro43677(int id) {
    Registro43677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
