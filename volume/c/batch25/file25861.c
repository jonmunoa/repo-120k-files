// fichero 25861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25861;

Registro25861 crear_registro25861(int id) {
    Registro25861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
