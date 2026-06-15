// fichero 5273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5273;

Registro5273 crear_registro5273(int id) {
    Registro5273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
