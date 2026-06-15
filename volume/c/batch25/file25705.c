// fichero 25705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25705;

Registro25705 crear_registro25705(int id) {
    Registro25705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
