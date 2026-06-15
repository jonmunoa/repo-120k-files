// fichero 25033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25033;

Registro25033 crear_registro25033(int id) {
    Registro25033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
