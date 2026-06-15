// fichero 8373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8373;

Registro8373 crear_registro8373(int id) {
    Registro8373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
