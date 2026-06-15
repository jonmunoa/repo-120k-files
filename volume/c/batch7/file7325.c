// fichero 7325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7325;

Registro7325 crear_registro7325(int id) {
    Registro7325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
