// fichero 12721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12721;

Registro12721 crear_registro12721(int id) {
    Registro12721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
