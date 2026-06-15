// fichero 25021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25021;

Registro25021 crear_registro25021(int id) {
    Registro25021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
