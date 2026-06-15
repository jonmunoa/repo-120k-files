// fichero 4173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4173;

Registro4173 crear_registro4173(int id) {
    Registro4173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
