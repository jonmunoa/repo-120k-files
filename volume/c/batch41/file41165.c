// fichero 41165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41165;

Registro41165 crear_registro41165(int id) {
    Registro41165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
