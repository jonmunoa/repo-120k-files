// fichero 46861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46861;

Registro46861 crear_registro46861(int id) {
    Registro46861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
