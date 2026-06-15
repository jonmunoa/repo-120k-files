// fichero 25857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25857;

Registro25857 crear_registro25857(int id) {
    Registro25857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
