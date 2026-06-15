// fichero 37073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37073;

Registro37073 crear_registro37073(int id) {
    Registro37073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
