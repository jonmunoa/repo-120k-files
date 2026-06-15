// fichero 537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro537;

Registro537 crear_registro537(int id) {
    Registro537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
