// fichero 36101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36101;

Registro36101 crear_registro36101(int id) {
    Registro36101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
