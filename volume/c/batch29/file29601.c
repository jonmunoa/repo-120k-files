// fichero 29601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29601;

Registro29601 crear_registro29601(int id) {
    Registro29601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
