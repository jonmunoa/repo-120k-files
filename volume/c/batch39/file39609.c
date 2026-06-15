// fichero 39609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39609;

Registro39609 crear_registro39609(int id) {
    Registro39609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
