// fichero 10721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10721;

Registro10721 crear_registro10721(int id) {
    Registro10721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
