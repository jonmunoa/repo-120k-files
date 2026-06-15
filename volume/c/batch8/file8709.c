// fichero 8709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8709;

Registro8709 crear_registro8709(int id) {
    Registro8709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
