// fichero 25097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25097;

Registro25097 crear_registro25097(int id) {
    Registro25097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
