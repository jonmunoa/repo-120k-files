// fichero 39265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39265;

Registro39265 crear_registro39265(int id) {
    Registro39265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
