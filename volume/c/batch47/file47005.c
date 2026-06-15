// fichero 47005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47005;

Registro47005 crear_registro47005(int id) {
    Registro47005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
