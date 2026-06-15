// fichero 19245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19245;

Registro19245 crear_registro19245(int id) {
    Registro19245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
