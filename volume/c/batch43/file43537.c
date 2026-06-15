// fichero 43537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43537;

Registro43537 crear_registro43537(int id) {
    Registro43537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
