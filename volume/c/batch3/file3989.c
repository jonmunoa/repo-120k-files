// fichero 3989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3989;

Registro3989 crear_registro3989(int id) {
    Registro3989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
