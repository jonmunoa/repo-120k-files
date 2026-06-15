// fichero 20809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20809;

Registro20809 crear_registro20809(int id) {
    Registro20809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
