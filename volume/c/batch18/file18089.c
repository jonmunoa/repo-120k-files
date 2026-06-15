// fichero 18089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18089;

Registro18089 crear_registro18089(int id) {
    Registro18089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
