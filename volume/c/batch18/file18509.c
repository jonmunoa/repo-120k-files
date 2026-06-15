// fichero 18509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18509;

Registro18509 crear_registro18509(int id) {
    Registro18509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
