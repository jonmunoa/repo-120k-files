// fichero 46585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46585;

Registro46585 crear_registro46585(int id) {
    Registro46585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
