// fichero 31717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31717;

Registro31717 crear_registro31717(int id) {
    Registro31717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
