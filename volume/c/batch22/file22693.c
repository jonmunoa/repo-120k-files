// fichero 22693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22693;

Registro22693 crear_registro22693(int id) {
    Registro22693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
