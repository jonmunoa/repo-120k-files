// fichero 4853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4853;

Registro4853 crear_registro4853(int id) {
    Registro4853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
