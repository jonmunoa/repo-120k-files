// fichero 31929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31929;

Registro31929 crear_registro31929(int id) {
    Registro31929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
