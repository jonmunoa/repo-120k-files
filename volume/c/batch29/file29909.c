// fichero 29909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29909;

Registro29909 crear_registro29909(int id) {
    Registro29909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
