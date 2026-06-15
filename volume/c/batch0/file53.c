// fichero 53 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro53;

Registro53 crear_registro53(int id) {
    Registro53 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
