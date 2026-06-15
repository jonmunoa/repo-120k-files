// fichero 5609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5609;

Registro5609 crear_registro5609(int id) {
    Registro5609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
