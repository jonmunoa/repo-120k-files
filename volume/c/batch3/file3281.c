// fichero 3281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3281;

Registro3281 crear_registro3281(int id) {
    Registro3281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
