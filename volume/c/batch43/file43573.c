// fichero 43573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43573;

Registro43573 crear_registro43573(int id) {
    Registro43573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
