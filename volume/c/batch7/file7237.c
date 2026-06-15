// fichero 7237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7237;

Registro7237 crear_registro7237(int id) {
    Registro7237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
