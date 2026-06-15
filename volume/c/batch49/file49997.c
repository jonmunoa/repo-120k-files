// fichero 49997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49997;

Registro49997 crear_registro49997(int id) {
    Registro49997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
