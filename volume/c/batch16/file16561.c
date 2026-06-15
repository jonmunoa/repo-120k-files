// fichero 16561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16561;

Registro16561 crear_registro16561(int id) {
    Registro16561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
