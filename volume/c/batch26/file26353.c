// fichero 26353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26353;

Registro26353 crear_registro26353(int id) {
    Registro26353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
