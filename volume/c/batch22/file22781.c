// fichero 22781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22781;

Registro22781 crear_registro22781(int id) {
    Registro22781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
