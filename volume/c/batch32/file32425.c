// fichero 32425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32425;

Registro32425 crear_registro32425(int id) {
    Registro32425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
