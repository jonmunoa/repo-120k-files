// fichero 22797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22797;

Registro22797 crear_registro22797(int id) {
    Registro22797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
