// fichero 39877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39877;

Registro39877 crear_registro39877(int id) {
    Registro39877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
