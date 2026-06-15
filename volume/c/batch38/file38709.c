// fichero 38709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38709;

Registro38709 crear_registro38709(int id) {
    Registro38709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
