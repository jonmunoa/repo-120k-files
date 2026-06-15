// fichero 25361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25361;

Registro25361 crear_registro25361(int id) {
    Registro25361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
