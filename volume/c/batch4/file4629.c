// fichero 4629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4629;

Registro4629 crear_registro4629(int id) {
    Registro4629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
