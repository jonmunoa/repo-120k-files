// fichero 28813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28813;

Registro28813 crear_registro28813(int id) {
    Registro28813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
