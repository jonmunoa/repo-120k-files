// fichero 49653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49653;

Registro49653 crear_registro49653(int id) {
    Registro49653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
