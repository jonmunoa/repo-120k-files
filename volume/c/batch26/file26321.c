// fichero 26321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26321;

Registro26321 crear_registro26321(int id) {
    Registro26321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
