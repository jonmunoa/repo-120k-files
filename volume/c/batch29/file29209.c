// fichero 29209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29209;

Registro29209 crear_registro29209(int id) {
    Registro29209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
