// fichero 44213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44213;

Registro44213 crear_registro44213(int id) {
    Registro44213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
