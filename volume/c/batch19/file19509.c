// fichero 19509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19509;

Registro19509 crear_registro19509(int id) {
    Registro19509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
