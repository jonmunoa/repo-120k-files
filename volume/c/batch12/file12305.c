// fichero 12305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12305;

Registro12305 crear_registro12305(int id) {
    Registro12305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
