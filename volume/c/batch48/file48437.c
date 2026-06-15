// fichero 48437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48437;

Registro48437 crear_registro48437(int id) {
    Registro48437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
