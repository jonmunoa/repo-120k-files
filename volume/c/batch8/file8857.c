// fichero 8857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8857;

Registro8857 crear_registro8857(int id) {
    Registro8857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
