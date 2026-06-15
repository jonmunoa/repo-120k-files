// fichero 44029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44029;

Registro44029 crear_registro44029(int id) {
    Registro44029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
