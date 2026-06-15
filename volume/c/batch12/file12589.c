// fichero 12589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12589;

Registro12589 crear_registro12589(int id) {
    Registro12589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
