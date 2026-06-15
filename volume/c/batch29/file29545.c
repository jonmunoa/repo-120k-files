// fichero 29545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29545;

Registro29545 crear_registro29545(int id) {
    Registro29545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
