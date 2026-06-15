// fichero 22025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22025;

Registro22025 crear_registro22025(int id) {
    Registro22025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
