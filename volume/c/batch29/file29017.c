// fichero 29017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29017;

Registro29017 crear_registro29017(int id) {
    Registro29017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
