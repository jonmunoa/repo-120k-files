// fichero 7289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7289;

Registro7289 crear_registro7289(int id) {
    Registro7289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
