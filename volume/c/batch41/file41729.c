// fichero 41729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41729;

Registro41729 crear_registro41729(int id) {
    Registro41729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
