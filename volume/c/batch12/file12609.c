// fichero 12609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12609;

Registro12609 crear_registro12609(int id) {
    Registro12609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
