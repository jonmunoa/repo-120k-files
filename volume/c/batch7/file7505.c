// fichero 7505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7505;

Registro7505 crear_registro7505(int id) {
    Registro7505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
