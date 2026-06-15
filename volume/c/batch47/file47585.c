// fichero 47585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47585;

Registro47585 crear_registro47585(int id) {
    Registro47585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
