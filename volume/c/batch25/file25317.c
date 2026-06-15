// fichero 25317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25317;

Registro25317 crear_registro25317(int id) {
    Registro25317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
