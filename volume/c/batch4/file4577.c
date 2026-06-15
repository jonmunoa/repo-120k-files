// fichero 4577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4577;

Registro4577 crear_registro4577(int id) {
    Registro4577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
