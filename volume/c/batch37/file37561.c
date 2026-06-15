// fichero 37561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37561;

Registro37561 crear_registro37561(int id) {
    Registro37561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
