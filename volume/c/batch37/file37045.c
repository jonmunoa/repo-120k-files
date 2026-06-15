// fichero 37045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37045;

Registro37045 crear_registro37045(int id) {
    Registro37045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
