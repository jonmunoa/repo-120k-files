// fichero 39857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39857;

Registro39857 crear_registro39857(int id) {
    Registro39857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
