// fichero 45257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45257;

Registro45257 crear_registro45257(int id) {
    Registro45257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
