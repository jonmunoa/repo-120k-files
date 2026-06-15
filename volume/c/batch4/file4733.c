// fichero 4733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4733;

Registro4733 crear_registro4733(int id) {
    Registro4733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
