// fichero 31329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31329;

Registro31329 crear_registro31329(int id) {
    Registro31329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
