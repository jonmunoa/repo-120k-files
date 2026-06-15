// fichero 47073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47073;

Registro47073 crear_registro47073(int id) {
    Registro47073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
