// fichero 25113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25113;

Registro25113 crear_registro25113(int id) {
    Registro25113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
