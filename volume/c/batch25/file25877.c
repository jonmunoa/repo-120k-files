// fichero 25877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25877;

Registro25877 crear_registro25877(int id) {
    Registro25877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
