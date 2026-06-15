// fichero 22837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22837;

Registro22837 crear_registro22837(int id) {
    Registro22837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
