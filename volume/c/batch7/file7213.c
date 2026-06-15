// fichero 7213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7213;

Registro7213 crear_registro7213(int id) {
    Registro7213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
