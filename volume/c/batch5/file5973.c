// fichero 5973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5973;

Registro5973 crear_registro5973(int id) {
    Registro5973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
