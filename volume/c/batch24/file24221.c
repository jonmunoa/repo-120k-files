// fichero 24221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24221;

Registro24221 crear_registro24221(int id) {
    Registro24221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
