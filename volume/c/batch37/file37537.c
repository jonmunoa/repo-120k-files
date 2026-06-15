// fichero 37537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37537;

Registro37537 crear_registro37537(int id) {
    Registro37537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
