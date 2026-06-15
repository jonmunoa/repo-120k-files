// fichero 46193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46193;

Registro46193 crear_registro46193(int id) {
    Registro46193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
