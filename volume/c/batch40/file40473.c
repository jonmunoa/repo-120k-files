// fichero 40473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40473;

Registro40473 crear_registro40473(int id) {
    Registro40473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
