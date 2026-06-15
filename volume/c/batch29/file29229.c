// fichero 29229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29229;

Registro29229 crear_registro29229(int id) {
    Registro29229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
