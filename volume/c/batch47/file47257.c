// fichero 47257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47257;

Registro47257 crear_registro47257(int id) {
    Registro47257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
