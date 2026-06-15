// fichero 1321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1321;

Registro1321 crear_registro1321(int id) {
    Registro1321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
