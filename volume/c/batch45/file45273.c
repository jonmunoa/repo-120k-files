// fichero 45273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45273;

Registro45273 crear_registro45273(int id) {
    Registro45273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
