// fichero 17533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17533;

Registro17533 crear_registro17533(int id) {
    Registro17533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
