// fichero 3045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3045;

Registro3045 crear_registro3045(int id) {
    Registro3045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
