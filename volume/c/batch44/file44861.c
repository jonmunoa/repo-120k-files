// fichero 44861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44861;

Registro44861 crear_registro44861(int id) {
    Registro44861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
