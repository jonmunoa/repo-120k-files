// fichero 4641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4641;

Registro4641 crear_registro4641(int id) {
    Registro4641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
