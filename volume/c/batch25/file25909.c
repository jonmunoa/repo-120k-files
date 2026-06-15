// fichero 25909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25909;

Registro25909 crear_registro25909(int id) {
    Registro25909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
