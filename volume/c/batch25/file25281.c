// fichero 25281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25281;

Registro25281 crear_registro25281(int id) {
    Registro25281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
