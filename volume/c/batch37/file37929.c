// fichero 37929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37929;

Registro37929 crear_registro37929(int id) {
    Registro37929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
