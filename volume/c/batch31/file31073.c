// fichero 31073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31073;

Registro31073 crear_registro31073(int id) {
    Registro31073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
