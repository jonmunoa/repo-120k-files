// fichero 25109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25109;

Registro25109 crear_registro25109(int id) {
    Registro25109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
