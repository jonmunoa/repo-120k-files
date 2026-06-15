// fichero 26577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26577;

Registro26577 crear_registro26577(int id) {
    Registro26577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
