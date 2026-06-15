// fichero 49533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49533;

Registro49533 crear_registro49533(int id) {
    Registro49533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
