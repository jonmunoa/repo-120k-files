// fichero 18517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18517;

Registro18517 crear_registro18517(int id) {
    Registro18517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
