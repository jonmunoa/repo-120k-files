// fichero 37509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37509;

Registro37509 crear_registro37509(int id) {
    Registro37509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
