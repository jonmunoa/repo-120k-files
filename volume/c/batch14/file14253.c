// fichero 14253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14253;

Registro14253 crear_registro14253(int id) {
    Registro14253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
