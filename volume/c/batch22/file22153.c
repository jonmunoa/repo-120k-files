// fichero 22153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22153;

Registro22153 crear_registro22153(int id) {
    Registro22153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
