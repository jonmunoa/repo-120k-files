// fichero 6881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6881;

Registro6881 crear_registro6881(int id) {
    Registro6881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
