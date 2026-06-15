// fichero 39073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39073;

Registro39073 crear_registro39073(int id) {
    Registro39073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
