// fichero 22497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22497;

Registro22497 crear_registro22497(int id) {
    Registro22497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
