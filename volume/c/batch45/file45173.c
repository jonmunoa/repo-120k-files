// fichero 45173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45173;

Registro45173 crear_registro45173(int id) {
    Registro45173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
