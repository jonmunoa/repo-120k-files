// fichero 31789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31789;

Registro31789 crear_registro31789(int id) {
    Registro31789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
