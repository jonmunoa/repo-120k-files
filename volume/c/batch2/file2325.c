// fichero 2325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2325;

Registro2325 crear_registro2325(int id) {
    Registro2325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
