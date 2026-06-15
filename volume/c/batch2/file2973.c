// fichero 2973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2973;

Registro2973 crear_registro2973(int id) {
    Registro2973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
