// fichero 25801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25801;

Registro25801 crear_registro25801(int id) {
    Registro25801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
