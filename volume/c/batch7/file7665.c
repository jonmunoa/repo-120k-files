// fichero 7665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7665;

Registro7665 crear_registro7665(int id) {
    Registro7665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
