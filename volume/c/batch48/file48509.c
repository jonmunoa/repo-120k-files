// fichero 48509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48509;

Registro48509 crear_registro48509(int id) {
    Registro48509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
