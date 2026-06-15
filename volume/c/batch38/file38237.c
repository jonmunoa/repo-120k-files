// fichero 38237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38237;

Registro38237 crear_registro38237(int id) {
    Registro38237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
