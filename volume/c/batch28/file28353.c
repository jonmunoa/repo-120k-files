// fichero 28353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28353;

Registro28353 crear_registro28353(int id) {
    Registro28353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
