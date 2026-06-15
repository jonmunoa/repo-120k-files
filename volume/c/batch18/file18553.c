// fichero 18553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18553;

Registro18553 crear_registro18553(int id) {
    Registro18553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
