// fichero 25901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25901;

Registro25901 crear_registro25901(int id) {
    Registro25901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
