// fichero 33273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33273;

Registro33273 crear_registro33273(int id) {
    Registro33273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
