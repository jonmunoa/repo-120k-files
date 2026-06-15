// fichero 42857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42857;

Registro42857 crear_registro42857(int id) {
    Registro42857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
