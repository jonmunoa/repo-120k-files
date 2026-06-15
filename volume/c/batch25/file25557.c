// fichero 25557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25557;

Registro25557 crear_registro25557(int id) {
    Registro25557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
