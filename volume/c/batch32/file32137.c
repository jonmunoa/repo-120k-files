// fichero 32137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32137;

Registro32137 crear_registro32137(int id) {
    Registro32137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
