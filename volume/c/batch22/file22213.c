// fichero 22213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22213;

Registro22213 crear_registro22213(int id) {
    Registro22213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
