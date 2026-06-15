// fichero 7593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7593;

Registro7593 crear_registro7593(int id) {
    Registro7593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
