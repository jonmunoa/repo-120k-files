// fichero 25345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25345;

Registro25345 crear_registro25345(int id) {
    Registro25345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
