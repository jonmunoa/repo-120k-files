// fichero 19761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19761;

Registro19761 crear_registro19761(int id) {
    Registro19761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
