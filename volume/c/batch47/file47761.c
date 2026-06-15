// fichero 47761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47761;

Registro47761 crear_registro47761(int id) {
    Registro47761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
