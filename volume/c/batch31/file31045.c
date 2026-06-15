// fichero 31045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31045;

Registro31045 crear_registro31045(int id) {
    Registro31045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
