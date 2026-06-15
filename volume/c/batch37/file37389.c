// fichero 37389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37389;

Registro37389 crear_registro37389(int id) {
    Registro37389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
