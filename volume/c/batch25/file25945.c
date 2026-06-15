// fichero 25945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25945;

Registro25945 crear_registro25945(int id) {
    Registro25945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
