// fichero 31909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31909;

Registro31909 crear_registro31909(int id) {
    Registro31909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
