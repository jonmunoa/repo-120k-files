// fichero 25137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25137;

Registro25137 crear_registro25137(int id) {
    Registro25137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
