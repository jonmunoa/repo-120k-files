// fichero 25813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25813;

Registro25813 crear_registro25813(int id) {
    Registro25813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
