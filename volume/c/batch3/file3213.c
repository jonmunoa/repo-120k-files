// fichero 3213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3213;

Registro3213 crear_registro3213(int id) {
    Registro3213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
