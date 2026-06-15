// fichero 37533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37533;

Registro37533 crear_registro37533(int id) {
    Registro37533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
