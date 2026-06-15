// fichero 26521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26521;

Registro26521 crear_registro26521(int id) {
    Registro26521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
