// fichero 2861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2861;

Registro2861 crear_registro2861(int id) {
    Registro2861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
