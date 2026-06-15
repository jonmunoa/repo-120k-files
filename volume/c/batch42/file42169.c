// fichero 42169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42169;

Registro42169 crear_registro42169(int id) {
    Registro42169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
