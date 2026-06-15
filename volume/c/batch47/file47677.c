// fichero 47677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47677;

Registro47677 crear_registro47677(int id) {
    Registro47677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
