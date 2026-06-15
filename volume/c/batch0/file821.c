// fichero 821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro821;

Registro821 crear_registro821(int id) {
    Registro821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
