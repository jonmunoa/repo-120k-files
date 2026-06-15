// fichero 25353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25353;

Registro25353 crear_registro25353(int id) {
    Registro25353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
