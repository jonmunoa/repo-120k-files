// fichero 31017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31017;

Registro31017 crear_registro31017(int id) {
    Registro31017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
