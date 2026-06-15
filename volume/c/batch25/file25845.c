// fichero 25845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25845;

Registro25845 crear_registro25845(int id) {
    Registro25845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
