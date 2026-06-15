// fichero 25229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25229;

Registro25229 crear_registro25229(int id) {
    Registro25229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
