// fichero 24593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24593;

Registro24593 crear_registro24593(int id) {
    Registro24593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
