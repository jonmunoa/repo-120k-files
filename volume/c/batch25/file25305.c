// fichero 25305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25305;

Registro25305 crear_registro25305(int id) {
    Registro25305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
