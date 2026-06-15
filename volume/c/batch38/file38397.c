// fichero 38397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38397;

Registro38397 crear_registro38397(int id) {
    Registro38397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
