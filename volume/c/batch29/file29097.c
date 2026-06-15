// fichero 29097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29097;

Registro29097 crear_registro29097(int id) {
    Registro29097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
