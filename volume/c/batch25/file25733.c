// fichero 25733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25733;

Registro25733 crear_registro25733(int id) {
    Registro25733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
