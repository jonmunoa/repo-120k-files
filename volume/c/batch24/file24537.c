// fichero 24537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24537;

Registro24537 crear_registro24537(int id) {
    Registro24537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
