// fichero 25061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25061;

Registro25061 crear_registro25061(int id) {
    Registro25061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
