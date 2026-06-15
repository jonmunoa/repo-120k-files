// fichero 30741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30741;

Registro30741 crear_registro30741(int id) {
    Registro30741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
