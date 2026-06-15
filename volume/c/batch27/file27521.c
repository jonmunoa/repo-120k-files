// fichero 27521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27521;

Registro27521 crear_registro27521(int id) {
    Registro27521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
