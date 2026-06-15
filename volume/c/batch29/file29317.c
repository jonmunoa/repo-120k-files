// fichero 29317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29317;

Registro29317 crear_registro29317(int id) {
    Registro29317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
