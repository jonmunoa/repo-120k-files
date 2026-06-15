// fichero 37093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37093;

Registro37093 crear_registro37093(int id) {
    Registro37093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
