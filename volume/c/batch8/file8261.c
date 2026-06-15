// fichero 8261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8261;

Registro8261 crear_registro8261(int id) {
    Registro8261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
