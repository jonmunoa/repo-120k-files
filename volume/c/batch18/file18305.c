// fichero 18305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18305;

Registro18305 crear_registro18305(int id) {
    Registro18305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
