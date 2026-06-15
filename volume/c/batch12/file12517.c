// fichero 12517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12517;

Registro12517 crear_registro12517(int id) {
    Registro12517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
