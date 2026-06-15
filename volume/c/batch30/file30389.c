// fichero 30389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30389;

Registro30389 crear_registro30389(int id) {
    Registro30389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
