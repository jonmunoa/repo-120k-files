// fichero 31225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31225;

Registro31225 crear_registro31225(int id) {
    Registro31225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
