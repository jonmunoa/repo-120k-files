// fichero 37729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37729;

Registro37729 crear_registro37729(int id) {
    Registro37729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
