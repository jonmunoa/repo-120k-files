// fichero 28609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28609;

Registro28609 crear_registro28609(int id) {
    Registro28609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
