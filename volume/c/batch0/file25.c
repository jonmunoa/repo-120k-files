// fichero 25 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25;

Registro25 crear_registro25(int id) {
    Registro25 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
