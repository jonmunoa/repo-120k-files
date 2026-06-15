// fichero 25081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25081;

Registro25081 crear_registro25081(int id) {
    Registro25081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
