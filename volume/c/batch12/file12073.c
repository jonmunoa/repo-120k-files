// fichero 12073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12073;

Registro12073 crear_registro12073(int id) {
    Registro12073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
