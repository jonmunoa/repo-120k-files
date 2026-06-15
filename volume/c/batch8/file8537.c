// fichero 8537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8537;

Registro8537 crear_registro8537(int id) {
    Registro8537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
