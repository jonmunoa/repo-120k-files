// fichero 24509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24509;

Registro24509 crear_registro24509(int id) {
    Registro24509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
