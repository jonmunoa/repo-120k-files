// fichero 18005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18005;

Registro18005 crear_registro18005(int id) {
    Registro18005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
