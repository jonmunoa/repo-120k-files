// fichero 46121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46121;

Registro46121 crear_registro46121(int id) {
    Registro46121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
