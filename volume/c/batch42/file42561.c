// fichero 42561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42561;

Registro42561 crear_registro42561(int id) {
    Registro42561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
