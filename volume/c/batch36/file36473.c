// fichero 36473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36473;

Registro36473 crear_registro36473(int id) {
    Registro36473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
