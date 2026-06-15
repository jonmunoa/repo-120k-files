// fichero 31129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31129;

Registro31129 crear_registro31129(int id) {
    Registro31129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
