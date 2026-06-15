// fichero 37489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37489;

Registro37489 crear_registro37489(int id) {
    Registro37489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
