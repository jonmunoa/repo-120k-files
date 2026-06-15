// fichero 37449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37449;

Registro37449 crear_registro37449(int id) {
    Registro37449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
