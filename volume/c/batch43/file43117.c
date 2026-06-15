// fichero 43117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43117;

Registro43117 crear_registro43117(int id) {
    Registro43117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
