// fichero 25365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25365;

Registro25365 crear_registro25365(int id) {
    Registro25365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
