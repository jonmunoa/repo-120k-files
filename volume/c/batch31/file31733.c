// fichero 31733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31733;

Registro31733 crear_registro31733(int id) {
    Registro31733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
