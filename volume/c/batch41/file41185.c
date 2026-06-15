// fichero 41185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41185;

Registro41185 crear_registro41185(int id) {
    Registro41185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
