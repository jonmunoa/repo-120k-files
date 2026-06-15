// fichero 217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro217;

Registro217 crear_registro217(int id) {
    Registro217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
