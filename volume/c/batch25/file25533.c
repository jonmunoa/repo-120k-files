// fichero 25533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25533;

Registro25533 crear_registro25533(int id) {
    Registro25533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
