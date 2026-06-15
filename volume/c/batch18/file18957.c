// fichero 18957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18957;

Registro18957 crear_registro18957(int id) {
    Registro18957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
