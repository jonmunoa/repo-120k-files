// fichero 21537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21537;

Registro21537 crear_registro21537(int id) {
    Registro21537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
