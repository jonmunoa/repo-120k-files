// fichero 25053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25053;

Registro25053 crear_registro25053(int id) {
    Registro25053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
