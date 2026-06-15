// fichero 42549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42549;

Registro42549 crear_registro42549(int id) {
    Registro42549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
