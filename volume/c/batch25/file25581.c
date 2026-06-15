// fichero 25581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25581;

Registro25581 crear_registro25581(int id) {
    Registro25581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
