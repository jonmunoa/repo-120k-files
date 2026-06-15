// fichero 18229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18229;

Registro18229 crear_registro18229(int id) {
    Registro18229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
