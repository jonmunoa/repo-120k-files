// fichero 14289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14289;

Registro14289 crear_registro14289(int id) {
    Registro14289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
