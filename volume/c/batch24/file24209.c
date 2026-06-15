// fichero 24209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24209;

Registro24209 crear_registro24209(int id) {
    Registro24209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
