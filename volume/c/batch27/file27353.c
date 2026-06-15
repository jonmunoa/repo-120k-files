// fichero 27353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27353;

Registro27353 crear_registro27353(int id) {
    Registro27353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
