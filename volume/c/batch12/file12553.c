// fichero 12553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12553;

Registro12553 crear_registro12553(int id) {
    Registro12553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
