// fichero 25177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25177;

Registro25177 crear_registro25177(int id) {
    Registro25177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
