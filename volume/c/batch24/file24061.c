// fichero 24061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24061;

Registro24061 crear_registro24061(int id) {
    Registro24061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
