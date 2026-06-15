// fichero 36125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36125;

Registro36125 crear_registro36125(int id) {
    Registro36125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
