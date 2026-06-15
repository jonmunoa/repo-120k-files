// fichero 42365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42365;

Registro42365 crear_registro42365(int id) {
    Registro42365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
