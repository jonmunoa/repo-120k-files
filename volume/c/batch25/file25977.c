// fichero 25977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25977;

Registro25977 crear_registro25977(int id) {
    Registro25977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
