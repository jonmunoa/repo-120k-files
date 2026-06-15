// fichero 12625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12625;

Registro12625 crear_registro12625(int id) {
    Registro12625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
