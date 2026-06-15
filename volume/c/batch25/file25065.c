// fichero 25065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25065;

Registro25065 crear_registro25065(int id) {
    Registro25065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
