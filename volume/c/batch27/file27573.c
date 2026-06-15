// fichero 27573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27573;

Registro27573 crear_registro27573(int id) {
    Registro27573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
