// fichero 42721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42721;

Registro42721 crear_registro42721(int id) {
    Registro42721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
