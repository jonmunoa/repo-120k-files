// fichero 17989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17989;

Registro17989 crear_registro17989(int id) {
    Registro17989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
