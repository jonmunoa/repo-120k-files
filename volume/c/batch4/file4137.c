// fichero 4137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4137;

Registro4137 crear_registro4137(int id) {
    Registro4137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
