// fichero 49381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49381;

Registro49381 crear_registro49381(int id) {
    Registro49381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
