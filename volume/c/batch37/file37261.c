// fichero 37261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37261;

Registro37261 crear_registro37261(int id) {
    Registro37261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
