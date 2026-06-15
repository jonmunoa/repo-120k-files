// fichero 20725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20725;

Registro20725 crear_registro20725(int id) {
    Registro20725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
