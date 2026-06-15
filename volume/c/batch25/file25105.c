// fichero 25105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25105;

Registro25105 crear_registro25105(int id) {
    Registro25105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
