// fichero 18757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18757;

Registro18757 crear_registro18757(int id) {
    Registro18757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
