// fichero 24761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24761;

Registro24761 crear_registro24761(int id) {
    Registro24761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
