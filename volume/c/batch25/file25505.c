// fichero 25505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25505;

Registro25505 crear_registro25505(int id) {
    Registro25505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
