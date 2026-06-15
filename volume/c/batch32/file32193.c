// fichero 32193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32193;

Registro32193 crear_registro32193(int id) {
    Registro32193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
