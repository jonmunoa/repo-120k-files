// fichero 18101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18101;

Registro18101 crear_registro18101(int id) {
    Registro18101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
