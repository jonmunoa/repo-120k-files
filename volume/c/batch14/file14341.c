// fichero 14341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14341;

Registro14341 crear_registro14341(int id) {
    Registro14341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
