// fichero 25713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25713;

Registro25713 crear_registro25713(int id) {
    Registro25713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
