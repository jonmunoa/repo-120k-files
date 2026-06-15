// fichero 14573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14573;

Registro14573 crear_registro14573(int id) {
    Registro14573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
