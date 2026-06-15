// fichero 17957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17957;

Registro17957 crear_registro17957(int id) {
    Registro17957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
