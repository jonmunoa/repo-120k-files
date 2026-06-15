// fichero 41709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41709;

Registro41709 crear_registro41709(int id) {
    Registro41709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
