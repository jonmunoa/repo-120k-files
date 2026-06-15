// fichero 25125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25125;

Registro25125 crear_registro25125(int id) {
    Registro25125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
