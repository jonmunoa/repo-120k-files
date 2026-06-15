// fichero 29213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29213;

Registro29213 crear_registro29213(int id) {
    Registro29213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
