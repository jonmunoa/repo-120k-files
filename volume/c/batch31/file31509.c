// fichero 31509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31509;

Registro31509 crear_registro31509(int id) {
    Registro31509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
