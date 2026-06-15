// fichero 25401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25401;

Registro25401 crear_registro25401(int id) {
    Registro25401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
