// fichero 30801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30801;

Registro30801 crear_registro30801(int id) {
    Registro30801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
