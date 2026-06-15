// fichero 25029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25029;

Registro25029 crear_registro25029(int id) {
    Registro25029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
