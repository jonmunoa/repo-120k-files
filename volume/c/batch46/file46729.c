// fichero 46729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46729;

Registro46729 crear_registro46729(int id) {
    Registro46729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
