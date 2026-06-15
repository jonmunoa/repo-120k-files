// fichero 25965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25965;

Registro25965 crear_registro25965(int id) {
    Registro25965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
