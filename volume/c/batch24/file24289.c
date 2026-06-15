// fichero 24289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24289;

Registro24289 crear_registro24289(int id) {
    Registro24289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
