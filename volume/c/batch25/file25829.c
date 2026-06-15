// fichero 25829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25829;

Registro25829 crear_registro25829(int id) {
    Registro25829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
