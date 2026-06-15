// fichero 25797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25797;

Registro25797 crear_registro25797(int id) {
    Registro25797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
