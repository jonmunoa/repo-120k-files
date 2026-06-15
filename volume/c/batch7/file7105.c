// fichero 7105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7105;

Registro7105 crear_registro7105(int id) {
    Registro7105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
