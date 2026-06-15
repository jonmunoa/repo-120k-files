// fichero 25593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25593;

Registro25593 crear_registro25593(int id) {
    Registro25593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
