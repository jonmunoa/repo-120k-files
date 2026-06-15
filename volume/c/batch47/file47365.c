// fichero 47365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47365;

Registro47365 crear_registro47365(int id) {
    Registro47365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
