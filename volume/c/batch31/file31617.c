// fichero 31617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31617;

Registro31617 crear_registro31617(int id) {
    Registro31617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
