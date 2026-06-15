// fichero 36857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36857;

Registro36857 crear_registro36857(int id) {
    Registro36857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
