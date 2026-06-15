// fichero 33193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33193;

Registro33193 crear_registro33193(int id) {
    Registro33193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
