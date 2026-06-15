// fichero 20577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20577;

Registro20577 crear_registro20577(int id) {
    Registro20577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
