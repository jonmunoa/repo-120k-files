// fichero 28861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28861;

Registro28861 crear_registro28861(int id) {
    Registro28861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
