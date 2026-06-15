// fichero 47281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47281;

Registro47281 crear_registro47281(int id) {
    Registro47281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
