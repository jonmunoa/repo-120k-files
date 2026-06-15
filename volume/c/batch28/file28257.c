// fichero 28257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28257;

Registro28257 crear_registro28257(int id) {
    Registro28257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
