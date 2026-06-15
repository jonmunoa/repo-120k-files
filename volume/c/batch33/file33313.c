// fichero 33313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33313;

Registro33313 crear_registro33313(int id) {
    Registro33313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
