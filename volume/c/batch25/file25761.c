// fichero 25761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25761;

Registro25761 crear_registro25761(int id) {
    Registro25761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
