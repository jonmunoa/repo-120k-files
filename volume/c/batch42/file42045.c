// fichero 42045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42045;

Registro42045 crear_registro42045(int id) {
    Registro42045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
