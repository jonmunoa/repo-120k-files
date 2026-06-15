// fichero 29037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29037;

Registro29037 crear_registro29037(int id) {
    Registro29037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
