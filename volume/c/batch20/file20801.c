// fichero 20801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20801;

Registro20801 crear_registro20801(int id) {
    Registro20801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
