// fichero 13109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13109;

Registro13109 crear_registro13109(int id) {
    Registro13109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
