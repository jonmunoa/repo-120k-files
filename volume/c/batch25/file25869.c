// fichero 25869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25869;

Registro25869 crear_registro25869(int id) {
    Registro25869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
