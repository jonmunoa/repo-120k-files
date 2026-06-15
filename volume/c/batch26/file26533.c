// fichero 26533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26533;

Registro26533 crear_registro26533(int id) {
    Registro26533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
