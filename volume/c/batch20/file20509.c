// fichero 20509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20509;

Registro20509 crear_registro20509(int id) {
    Registro20509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
