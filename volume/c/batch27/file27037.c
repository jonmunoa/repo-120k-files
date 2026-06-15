// fichero 27037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27037;

Registro27037 crear_registro27037(int id) {
    Registro27037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
