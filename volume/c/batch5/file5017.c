// fichero 5017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5017;

Registro5017 crear_registro5017(int id) {
    Registro5017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
