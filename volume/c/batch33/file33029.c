// fichero 33029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33029;

Registro33029 crear_registro33029(int id) {
    Registro33029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
