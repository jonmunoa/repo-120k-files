// fichero 42449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42449;

Registro42449 crear_registro42449(int id) {
    Registro42449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
