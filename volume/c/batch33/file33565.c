// fichero 33565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33565;

Registro33565 crear_registro33565(int id) {
    Registro33565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
