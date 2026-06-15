// fichero 19097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19097;

Registro19097 crear_registro19097(int id) {
    Registro19097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
