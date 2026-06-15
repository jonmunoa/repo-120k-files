// fichero 18389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18389;

Registro18389 crear_registro18389(int id) {
    Registro18389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
