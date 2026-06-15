// fichero 25769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25769;

Registro25769 crear_registro25769(int id) {
    Registro25769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
