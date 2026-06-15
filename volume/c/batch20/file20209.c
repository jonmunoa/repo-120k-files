// fichero 20209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20209;

Registro20209 crear_registro20209(int id) {
    Registro20209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
