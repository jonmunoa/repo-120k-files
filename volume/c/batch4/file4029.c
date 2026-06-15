// fichero 4029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4029;

Registro4029 crear_registro4029(int id) {
    Registro4029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
