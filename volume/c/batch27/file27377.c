// fichero 27377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27377;

Registro27377 crear_registro27377(int id) {
    Registro27377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
