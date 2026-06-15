// fichero 47269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47269;

Registro47269 crear_registro47269(int id) {
    Registro47269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
