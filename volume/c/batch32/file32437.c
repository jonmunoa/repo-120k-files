// fichero 32437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32437;

Registro32437 crear_registro32437(int id) {
    Registro32437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
