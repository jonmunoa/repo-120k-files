// fichero 32497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32497;

Registro32497 crear_registro32497(int id) {
    Registro32497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
