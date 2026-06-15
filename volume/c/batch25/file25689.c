// fichero 25689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25689;

Registro25689 crear_registro25689(int id) {
    Registro25689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
