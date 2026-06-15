// fichero 38761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38761;

Registro38761 crear_registro38761(int id) {
    Registro38761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
