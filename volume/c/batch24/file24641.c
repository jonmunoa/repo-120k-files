// fichero 24641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24641;

Registro24641 crear_registro24641(int id) {
    Registro24641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
