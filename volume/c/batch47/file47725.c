// fichero 47725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47725;

Registro47725 crear_registro47725(int id) {
    Registro47725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
