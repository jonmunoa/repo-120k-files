// fichero 4077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4077;

Registro4077 crear_registro4077(int id) {
    Registro4077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
