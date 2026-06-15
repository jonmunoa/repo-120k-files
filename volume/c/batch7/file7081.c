// fichero 7081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7081;

Registro7081 crear_registro7081(int id) {
    Registro7081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
