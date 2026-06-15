// fichero 36117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36117;

Registro36117 crear_registro36117(int id) {
    Registro36117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
