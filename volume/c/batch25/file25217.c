// fichero 25217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25217;

Registro25217 crear_registro25217(int id) {
    Registro25217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
