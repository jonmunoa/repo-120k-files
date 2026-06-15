// fichero 25145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25145;

Registro25145 crear_registro25145(int id) {
    Registro25145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
