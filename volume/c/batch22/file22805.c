// fichero 22805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22805;

Registro22805 crear_registro22805(int id) {
    Registro22805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
