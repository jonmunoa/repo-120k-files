// fichero 39053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39053;

Registro39053 crear_registro39053(int id) {
    Registro39053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
