// fichero 20709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20709;

Registro20709 crear_registro20709(int id) {
    Registro20709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
