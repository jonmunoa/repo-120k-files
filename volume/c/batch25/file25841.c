// fichero 25841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25841;

Registro25841 crear_registro25841(int id) {
    Registro25841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
