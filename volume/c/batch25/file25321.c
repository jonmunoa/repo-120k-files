// fichero 25321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25321;

Registro25321 crear_registro25321(int id) {
    Registro25321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
