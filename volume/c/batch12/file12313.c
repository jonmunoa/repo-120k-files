// fichero 12313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12313;

Registro12313 crear_registro12313(int id) {
    Registro12313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
