// fichero 45689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45689;

Registro45689 crear_registro45689(int id) {
    Registro45689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
