// fichero 45317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45317;

Registro45317 crear_registro45317(int id) {
    Registro45317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
