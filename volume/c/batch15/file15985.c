// fichero 15985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15985;

Registro15985 crear_registro15985(int id) {
    Registro15985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
