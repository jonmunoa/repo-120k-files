// fichero 38533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38533;

Registro38533 crear_registro38533(int id) {
    Registro38533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
