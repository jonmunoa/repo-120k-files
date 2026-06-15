// fichero 6369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6369;

Registro6369 crear_registro6369(int id) {
    Registro6369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
