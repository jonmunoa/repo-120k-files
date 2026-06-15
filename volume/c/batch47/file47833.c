// fichero 47833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47833;

Registro47833 crear_registro47833(int id) {
    Registro47833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
