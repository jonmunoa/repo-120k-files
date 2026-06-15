// fichero 20749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20749;

Registro20749 crear_registro20749(int id) {
    Registro20749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
