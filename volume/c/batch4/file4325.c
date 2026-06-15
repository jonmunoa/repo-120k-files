// fichero 4325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4325;

Registro4325 crear_registro4325(int id) {
    Registro4325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
