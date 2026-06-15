// fichero 2765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2765;

Registro2765 crear_registro2765(int id) {
    Registro2765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
