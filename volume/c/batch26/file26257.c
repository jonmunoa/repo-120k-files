// fichero 26257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26257;

Registro26257 crear_registro26257(int id) {
    Registro26257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
