// fichero 18245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18245;

Registro18245 crear_registro18245(int id) {
    Registro18245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
