// fichero 20529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20529;

Registro20529 crear_registro20529(int id) {
    Registro20529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
