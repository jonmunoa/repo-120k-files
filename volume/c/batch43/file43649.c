// fichero 43649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43649;

Registro43649 crear_registro43649(int id) {
    Registro43649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
