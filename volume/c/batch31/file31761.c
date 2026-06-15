// fichero 31761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31761;

Registro31761 crear_registro31761(int id) {
    Registro31761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
