// fichero 22733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22733;

Registro22733 crear_registro22733(int id) {
    Registro22733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
