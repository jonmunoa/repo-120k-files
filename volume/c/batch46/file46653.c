// fichero 46653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46653;

Registro46653 crear_registro46653(int id) {
    Registro46653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
