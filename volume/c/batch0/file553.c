// fichero 553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro553;

Registro553 crear_registro553(int id) {
    Registro553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
