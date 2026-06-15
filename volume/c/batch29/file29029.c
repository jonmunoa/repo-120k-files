// fichero 29029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29029;

Registro29029 crear_registro29029(int id) {
    Registro29029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
