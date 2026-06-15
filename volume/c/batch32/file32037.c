// fichero 32037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32037;

Registro32037 crear_registro32037(int id) {
    Registro32037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
