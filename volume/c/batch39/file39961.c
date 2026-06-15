// fichero 39961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39961;

Registro39961 crear_registro39961(int id) {
    Registro39961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
