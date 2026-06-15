// fichero 45329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45329;

Registro45329 crear_registro45329(int id) {
    Registro45329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
