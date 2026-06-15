// fichero 6237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6237;

Registro6237 crear_registro6237(int id) {
    Registro6237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
