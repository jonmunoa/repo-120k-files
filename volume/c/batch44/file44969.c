// fichero 44969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44969;

Registro44969 crear_registro44969(int id) {
    Registro44969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
