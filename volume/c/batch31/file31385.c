// fichero 31385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31385;

Registro31385 crear_registro31385(int id) {
    Registro31385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
