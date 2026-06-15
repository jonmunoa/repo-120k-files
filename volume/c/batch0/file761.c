// fichero 761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro761;

Registro761 crear_registro761(int id) {
    Registro761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
