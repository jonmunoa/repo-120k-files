// fichero 33249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33249;

Registro33249 crear_registro33249(int id) {
    Registro33249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
