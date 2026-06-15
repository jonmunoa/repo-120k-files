// fichero 6037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6037;

Registro6037 crear_registro6037(int id) {
    Registro6037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
