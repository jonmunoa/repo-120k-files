// fichero 25209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25209;

Registro25209 crear_registro25209(int id) {
    Registro25209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
