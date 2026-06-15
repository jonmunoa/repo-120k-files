// fichero 6321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6321;

Registro6321 crear_registro6321(int id) {
    Registro6321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
