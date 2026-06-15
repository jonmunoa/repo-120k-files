// fichero 30289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30289;

Registro30289 crear_registro30289(int id) {
    Registro30289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
