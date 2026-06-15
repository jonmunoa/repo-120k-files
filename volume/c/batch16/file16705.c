// fichero 16705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16705;

Registro16705 crear_registro16705(int id) {
    Registro16705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
