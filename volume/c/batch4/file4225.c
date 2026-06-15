// fichero 4225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4225;

Registro4225 crear_registro4225(int id) {
    Registro4225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
