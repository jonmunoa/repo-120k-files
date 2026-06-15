// fichero 33065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33065;

Registro33065 crear_registro33065(int id) {
    Registro33065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
