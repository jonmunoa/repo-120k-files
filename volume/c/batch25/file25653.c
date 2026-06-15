// fichero 25653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25653;

Registro25653 crear_registro25653(int id) {
    Registro25653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
