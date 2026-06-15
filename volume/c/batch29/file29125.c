// fichero 29125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29125;

Registro29125 crear_registro29125(int id) {
    Registro29125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
