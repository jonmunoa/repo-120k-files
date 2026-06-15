// fichero 27341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27341;

Registro27341 crear_registro27341(int id) {
    Registro27341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
