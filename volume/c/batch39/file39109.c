// fichero 39109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39109;

Registro39109 crear_registro39109(int id) {
    Registro39109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
