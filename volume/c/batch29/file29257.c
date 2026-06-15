// fichero 29257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29257;

Registro29257 crear_registro29257(int id) {
    Registro29257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
