// fichero 25121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25121;

Registro25121 crear_registro25121(int id) {
    Registro25121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
