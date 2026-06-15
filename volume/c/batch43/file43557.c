// fichero 43557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43557;

Registro43557 crear_registro43557(int id) {
    Registro43557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
