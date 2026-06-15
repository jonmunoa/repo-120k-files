// fichero 24137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24137;

Registro24137 crear_registro24137(int id) {
    Registro24137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
