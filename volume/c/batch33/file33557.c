// fichero 33557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33557;

Registro33557 crear_registro33557(int id) {
    Registro33557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
