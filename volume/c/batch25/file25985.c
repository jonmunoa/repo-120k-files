// fichero 25985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25985;

Registro25985 crear_registro25985(int id) {
    Registro25985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
