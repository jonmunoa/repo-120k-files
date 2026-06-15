// fichero 24737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24737;

Registro24737 crear_registro24737(int id) {
    Registro24737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
