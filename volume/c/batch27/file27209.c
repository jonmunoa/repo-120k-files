// fichero 27209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27209;

Registro27209 crear_registro27209(int id) {
    Registro27209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
