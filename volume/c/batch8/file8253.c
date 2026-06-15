// fichero 8253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8253;

Registro8253 crear_registro8253(int id) {
    Registro8253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
