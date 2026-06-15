// fichero 36729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36729;

Registro36729 crear_registro36729(int id) {
    Registro36729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
