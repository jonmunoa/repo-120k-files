// fichero 25181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25181;

Registro25181 crear_registro25181(int id) {
    Registro25181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
