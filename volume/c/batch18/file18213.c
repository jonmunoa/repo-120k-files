// fichero 18213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18213;

Registro18213 crear_registro18213(int id) {
    Registro18213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
