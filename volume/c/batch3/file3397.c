// fichero 3397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3397;

Registro3397 crear_registro3397(int id) {
    Registro3397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
