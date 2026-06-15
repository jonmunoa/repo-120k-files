// fichero 7221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7221;

Registro7221 crear_registro7221(int id) {
    Registro7221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
