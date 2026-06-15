// fichero 30989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30989;

Registro30989 crear_registro30989(int id) {
    Registro30989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
