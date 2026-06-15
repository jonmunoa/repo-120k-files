// fichero 381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro381;

Registro381 crear_registro381(int id) {
    Registro381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
