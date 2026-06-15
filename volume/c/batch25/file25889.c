// fichero 25889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25889;

Registro25889 crear_registro25889(int id) {
    Registro25889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
