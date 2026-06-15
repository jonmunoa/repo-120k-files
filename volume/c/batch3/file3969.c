// fichero 3969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3969;

Registro3969 crear_registro3969(int id) {
    Registro3969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
