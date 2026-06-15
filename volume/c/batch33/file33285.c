// fichero 33285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33285;

Registro33285 crear_registro33285(int id) {
    Registro33285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
