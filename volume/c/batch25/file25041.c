// fichero 25041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25041;

Registro25041 crear_registro25041(int id) {
    Registro25041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
