// fichero 31473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31473;

Registro31473 crear_registro31473(int id) {
    Registro31473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
