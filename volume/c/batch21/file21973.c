// fichero 21973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21973;

Registro21973 crear_registro21973(int id) {
    Registro21973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
