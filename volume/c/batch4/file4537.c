// fichero 4537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4537;

Registro4537 crear_registro4537(int id) {
    Registro4537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
