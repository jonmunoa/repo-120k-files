// fichero 36281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36281;

Registro36281 crear_registro36281(int id) {
    Registro36281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
