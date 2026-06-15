// fichero 31037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31037;

Registro31037 crear_registro31037(int id) {
    Registro31037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
