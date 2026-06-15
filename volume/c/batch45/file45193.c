// fichero 45193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45193;

Registro45193 crear_registro45193(int id) {
    Registro45193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
