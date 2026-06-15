// fichero 46809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46809;

Registro46809 crear_registro46809(int id) {
    Registro46809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
