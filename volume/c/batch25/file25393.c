// fichero 25393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25393;

Registro25393 crear_registro25393(int id) {
    Registro25393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
