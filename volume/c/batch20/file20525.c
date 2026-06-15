// fichero 20525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20525;

Registro20525 crear_registro20525(int id) {
    Registro20525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
