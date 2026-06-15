// fichero 4557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4557;

Registro4557 crear_registro4557(int id) {
    Registro4557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
