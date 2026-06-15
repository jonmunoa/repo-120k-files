// fichero 14353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14353;

Registro14353 crear_registro14353(int id) {
    Registro14353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
