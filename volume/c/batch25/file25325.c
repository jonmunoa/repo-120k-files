// fichero 25325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25325;

Registro25325 crear_registro25325(int id) {
    Registro25325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
