// fichero 32465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32465;

Registro32465 crear_registro32465(int id) {
    Registro32465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
