// fichero 39669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39669;

Registro39669 crear_registro39669(int id) {
    Registro39669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
