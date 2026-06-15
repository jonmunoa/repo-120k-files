// fichero 26469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26469;

Registro26469 crear_registro26469(int id) {
    Registro26469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
