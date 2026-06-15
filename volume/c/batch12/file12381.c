// fichero 12381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12381;

Registro12381 crear_registro12381(int id) {
    Registro12381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
