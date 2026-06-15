// fichero 42101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42101;

Registro42101 crear_registro42101(int id) {
    Registro42101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
