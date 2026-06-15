// fichero 4305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4305;

Registro4305 crear_registro4305(int id) {
    Registro4305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
