// fichero 6477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6477;

Registro6477 crear_registro6477(int id) {
    Registro6477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
