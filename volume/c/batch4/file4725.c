// fichero 4725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4725;

Registro4725 crear_registro4725(int id) {
    Registro4725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
