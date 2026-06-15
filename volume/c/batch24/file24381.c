// fichero 24381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24381;

Registro24381 crear_registro24381(int id) {
    Registro24381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
