// fichero 31353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31353;

Registro31353 crear_registro31353(int id) {
    Registro31353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
