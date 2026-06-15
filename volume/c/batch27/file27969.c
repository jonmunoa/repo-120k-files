// fichero 27969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27969;

Registro27969 crear_registro27969(int id) {
    Registro27969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
