// fichero 38861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38861;

Registro38861 crear_registro38861(int id) {
    Registro38861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
