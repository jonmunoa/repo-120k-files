// fichero 29329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29329;

Registro29329 crear_registro29329(int id) {
    Registro29329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
