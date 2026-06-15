// fichero 19537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19537;

Registro19537 crear_registro19537(int id) {
    Registro19537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
