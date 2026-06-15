// fichero 42901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42901;

Registro42901 crear_registro42901(int id) {
    Registro42901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
