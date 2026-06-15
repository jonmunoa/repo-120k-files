// fichero 10073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10073;

Registro10073 crear_registro10073(int id) {
    Registro10073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
