// fichero 32353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32353;

Registro32353 crear_registro32353(int id) {
    Registro32353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
