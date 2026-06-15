// fichero 16321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16321;

Registro16321 crear_registro16321(int id) {
    Registro16321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
