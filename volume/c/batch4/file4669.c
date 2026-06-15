// fichero 4669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4669;

Registro4669 crear_registro4669(int id) {
    Registro4669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
