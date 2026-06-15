// fichero 24913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24913;

Registro24913 crear_registro24913(int id) {
    Registro24913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
