// fichero 4969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4969;

Registro4969 crear_registro4969(int id) {
    Registro4969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
