// fichero 18853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18853;

Registro18853 crear_registro18853(int id) {
    Registro18853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
