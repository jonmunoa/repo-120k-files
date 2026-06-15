// fichero 35709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35709;

Registro35709 crear_registro35709(int id) {
    Registro35709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
