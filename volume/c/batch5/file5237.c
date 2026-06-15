// fichero 5237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5237;

Registro5237 crear_registro5237(int id) {
    Registro5237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
