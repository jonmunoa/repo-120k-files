// fichero 25885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25885;

Registro25885 crear_registro25885(int id) {
    Registro25885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
