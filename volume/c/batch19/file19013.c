// fichero 19013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19013;

Registro19013 crear_registro19013(int id) {
    Registro19013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
