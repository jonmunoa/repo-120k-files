// fichero 25893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25893;

Registro25893 crear_registro25893(int id) {
    Registro25893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
