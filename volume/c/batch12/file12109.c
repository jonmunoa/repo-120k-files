// fichero 12109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12109;

Registro12109 crear_registro12109(int id) {
    Registro12109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
