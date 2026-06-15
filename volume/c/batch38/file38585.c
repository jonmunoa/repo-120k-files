// fichero 38585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38585;

Registro38585 crear_registro38585(int id) {
    Registro38585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
