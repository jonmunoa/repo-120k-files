// fichero 25201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25201;

Registro25201 crear_registro25201(int id) {
    Registro25201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
