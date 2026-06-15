// fichero 30593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30593;

Registro30593 crear_registro30593(int id) {
    Registro30593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
