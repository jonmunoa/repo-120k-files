// fichero 31121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31121;

Registro31121 crear_registro31121(int id) {
    Registro31121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
