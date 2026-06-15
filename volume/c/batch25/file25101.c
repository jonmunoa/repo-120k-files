// fichero 25101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25101;

Registro25101 crear_registro25101(int id) {
    Registro25101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
