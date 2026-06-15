// fichero 27389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27389;

Registro27389 crear_registro27389(int id) {
    Registro27389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
