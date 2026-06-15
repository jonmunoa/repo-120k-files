// fichero 28069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28069;

Registro28069 crear_registro28069(int id) {
    Registro28069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
