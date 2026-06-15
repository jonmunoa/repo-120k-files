// fichero 47013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47013;

Registro47013 crear_registro47013(int id) {
    Registro47013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
