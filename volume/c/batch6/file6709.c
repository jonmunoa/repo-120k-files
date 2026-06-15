// fichero 6709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6709;

Registro6709 crear_registro6709(int id) {
    Registro6709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
