// fichero 7397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7397;

Registro7397 crear_registro7397(int id) {
    Registro7397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
