// fichero 26237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26237;

Registro26237 crear_registro26237(int id) {
    Registro26237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
