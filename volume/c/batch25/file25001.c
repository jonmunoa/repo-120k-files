// fichero 25001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25001;

Registro25001 crear_registro25001(int id) {
    Registro25001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
