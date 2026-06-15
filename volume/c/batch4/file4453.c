// fichero 4453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4453;

Registro4453 crear_registro4453(int id) {
    Registro4453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
