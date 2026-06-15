// fichero 8037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8037;

Registro8037 crear_registro8037(int id) {
    Registro8037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
