// fichero 25561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25561;

Registro25561 crear_registro25561(int id) {
    Registro25561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
