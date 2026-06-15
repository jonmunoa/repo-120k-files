// fichero 19073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19073;

Registro19073 crear_registro19073(int id) {
    Registro19073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
