// fichero 8245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8245;

Registro8245 crear_registro8245(int id) {
    Registro8245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
