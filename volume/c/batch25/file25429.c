// fichero 25429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25429;

Registro25429 crear_registro25429(int id) {
    Registro25429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
