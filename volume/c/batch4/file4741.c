// fichero 4741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4741;

Registro4741 crear_registro4741(int id) {
    Registro4741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
