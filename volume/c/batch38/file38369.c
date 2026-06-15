// fichero 38369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38369;

Registro38369 crear_registro38369(int id) {
    Registro38369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
