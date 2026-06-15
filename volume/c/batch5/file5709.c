// fichero 5709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5709;

Registro5709 crear_registro5709(int id) {
    Registro5709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
