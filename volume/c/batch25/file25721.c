// fichero 25721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25721;

Registro25721 crear_registro25721(int id) {
    Registro25721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
