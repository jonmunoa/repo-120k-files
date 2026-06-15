// fichero 47573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47573;

Registro47573 crear_registro47573(int id) {
    Registro47573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
