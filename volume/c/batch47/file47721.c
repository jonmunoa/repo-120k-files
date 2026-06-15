// fichero 47721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47721;

Registro47721 crear_registro47721(int id) {
    Registro47721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
