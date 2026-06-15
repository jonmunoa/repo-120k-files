// fichero 16373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16373;

Registro16373 crear_registro16373(int id) {
    Registro16373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
