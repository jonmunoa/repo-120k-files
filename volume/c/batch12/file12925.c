// fichero 12925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12925;

Registro12925 crear_registro12925(int id) {
    Registro12925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
