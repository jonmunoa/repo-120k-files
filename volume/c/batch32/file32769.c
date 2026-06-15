// fichero 32769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32769;

Registro32769 crear_registro32769(int id) {
    Registro32769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
