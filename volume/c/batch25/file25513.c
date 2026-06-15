// fichero 25513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25513;

Registro25513 crear_registro25513(int id) {
    Registro25513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
