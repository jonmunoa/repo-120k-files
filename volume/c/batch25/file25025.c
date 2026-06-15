// fichero 25025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25025;

Registro25025 crear_registro25025(int id) {
    Registro25025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
