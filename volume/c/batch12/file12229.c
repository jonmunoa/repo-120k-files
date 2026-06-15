// fichero 12229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12229;

Registro12229 crear_registro12229(int id) {
    Registro12229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
