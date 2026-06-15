// fichero 35349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35349;

Registro35349 crear_registro35349(int id) {
    Registro35349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
