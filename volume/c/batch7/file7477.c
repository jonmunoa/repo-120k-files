// fichero 7477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7477;

Registro7477 crear_registro7477(int id) {
    Registro7477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
