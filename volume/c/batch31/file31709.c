// fichero 31709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31709;

Registro31709 crear_registro31709(int id) {
    Registro31709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
