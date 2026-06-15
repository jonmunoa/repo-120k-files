// fichero 25221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25221;

Registro25221 crear_registro25221(int id) {
    Registro25221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
