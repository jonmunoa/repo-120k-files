// fichero 2421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2421;

Registro2421 crear_registro2421(int id) {
    Registro2421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
