// fichero 29929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29929;

Registro29929 crear_registro29929(int id) {
    Registro29929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
