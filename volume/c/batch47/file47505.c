// fichero 47505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47505;

Registro47505 crear_registro47505(int id) {
    Registro47505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
