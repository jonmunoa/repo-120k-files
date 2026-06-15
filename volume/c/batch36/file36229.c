// fichero 36229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36229;

Registro36229 crear_registro36229(int id) {
    Registro36229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
