// fichero 4289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4289;

Registro4289 crear_registro4289(int id) {
    Registro4289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
