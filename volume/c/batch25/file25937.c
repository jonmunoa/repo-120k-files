// fichero 25937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25937;

Registro25937 crear_registro25937(int id) {
    Registro25937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
