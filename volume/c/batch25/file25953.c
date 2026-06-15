// fichero 25953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25953;

Registro25953 crear_registro25953(int id) {
    Registro25953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
