// fichero 25973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25973;

Registro25973 crear_registro25973(int id) {
    Registro25973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
