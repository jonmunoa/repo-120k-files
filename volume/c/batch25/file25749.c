// fichero 25749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25749;

Registro25749 crear_registro25749(int id) {
    Registro25749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
