// fichero 46489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46489;

Registro46489 crear_registro46489(int id) {
    Registro46489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
