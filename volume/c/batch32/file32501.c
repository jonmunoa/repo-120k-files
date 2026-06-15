// fichero 32501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32501;

Registro32501 crear_registro32501(int id) {
    Registro32501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
