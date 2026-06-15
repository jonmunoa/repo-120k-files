// fichero 48221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48221;

Registro48221 crear_registro48221(int id) {
    Registro48221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
