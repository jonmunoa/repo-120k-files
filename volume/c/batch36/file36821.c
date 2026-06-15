// fichero 36821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36821;

Registro36821 crear_registro36821(int id) {
    Registro36821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
