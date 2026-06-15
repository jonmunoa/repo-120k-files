// fichero 25069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25069;

Registro25069 crear_registro25069(int id) {
    Registro25069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
