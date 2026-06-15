// fichero 3509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3509;

Registro3509 crear_registro3509(int id) {
    Registro3509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
