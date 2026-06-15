// fichero 8625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8625;

Registro8625 crear_registro8625(int id) {
    Registro8625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
