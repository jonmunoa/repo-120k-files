// fichero 25997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25997;

Registro25997 crear_registro25997(int id) {
    Registro25997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
