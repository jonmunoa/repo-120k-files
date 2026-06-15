// fichero 25313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25313;

Registro25313 crear_registro25313(int id) {
    Registro25313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
