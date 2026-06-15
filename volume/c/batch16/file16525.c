// fichero 16525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16525;

Registro16525 crear_registro16525(int id) {
    Registro16525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
