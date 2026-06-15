// fichero 25573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25573;

Registro25573 crear_registro25573(int id) {
    Registro25573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
