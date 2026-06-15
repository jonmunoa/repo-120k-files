// fichero 25129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25129;

Registro25129 crear_registro25129(int id) {
    Registro25129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
