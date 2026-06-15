// fichero 27709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27709;

Registro27709 crear_registro27709(int id) {
    Registro27709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
