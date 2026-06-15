// fichero 30045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30045;

Registro30045 crear_registro30045(int id) {
    Registro30045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
