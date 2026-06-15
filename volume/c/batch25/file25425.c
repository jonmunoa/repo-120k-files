// fichero 25425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25425;

Registro25425 crear_registro25425(int id) {
    Registro25425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
