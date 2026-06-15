// fichero 18649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18649;

Registro18649 crear_registro18649(int id) {
    Registro18649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
