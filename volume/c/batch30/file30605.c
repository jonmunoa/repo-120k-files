// fichero 30605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30605;

Registro30605 crear_registro30605(int id) {
    Registro30605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
