// fichero 36217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36217;

Registro36217 crear_registro36217(int id) {
    Registro36217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
