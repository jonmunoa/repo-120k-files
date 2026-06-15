// fichero 25517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25517;

Registro25517 crear_registro25517(int id) {
    Registro25517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
