// fichero 30861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30861;

Registro30861 crear_registro30861(int id) {
    Registro30861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
