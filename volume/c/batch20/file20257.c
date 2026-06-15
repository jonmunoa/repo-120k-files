// fichero 20257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20257;

Registro20257 crear_registro20257(int id) {
    Registro20257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
