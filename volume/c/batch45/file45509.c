// fichero 45509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45509;

Registro45509 crear_registro45509(int id) {
    Registro45509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
