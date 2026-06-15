// fichero 49237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49237;

Registro49237 crear_registro49237(int id) {
    Registro49237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
