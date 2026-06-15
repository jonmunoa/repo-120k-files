// fichero 39001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39001;

Registro39001 crear_registro39001(int id) {
    Registro39001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
