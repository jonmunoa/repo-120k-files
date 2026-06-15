// fichero 24749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24749;

Registro24749 crear_registro24749(int id) {
    Registro24749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
