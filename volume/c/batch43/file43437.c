// fichero 43437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43437;

Registro43437 crear_registro43437(int id) {
    Registro43437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
