// fichero 29517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29517;

Registro29517 crear_registro29517(int id) {
    Registro29517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
