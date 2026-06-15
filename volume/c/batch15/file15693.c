// fichero 15693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15693;

Registro15693 crear_registro15693(int id) {
    Registro15693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
