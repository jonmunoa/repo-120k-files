// fichero 39809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39809;

Registro39809 crear_registro39809(int id) {
    Registro39809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
