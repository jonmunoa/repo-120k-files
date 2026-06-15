// fichero 37493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37493;

Registro37493 crear_registro37493(int id) {
    Registro37493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
