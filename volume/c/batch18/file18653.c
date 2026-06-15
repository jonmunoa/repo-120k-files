// fichero 18653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18653;

Registro18653 crear_registro18653(int id) {
    Registro18653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
