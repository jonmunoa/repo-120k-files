// fichero 7557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7557;

Registro7557 crear_registro7557(int id) {
    Registro7557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
