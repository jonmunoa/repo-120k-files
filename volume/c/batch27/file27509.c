// fichero 27509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27509;

Registro27509 crear_registro27509(int id) {
    Registro27509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
