// fichero 24229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24229;

Registro24229 crear_registro24229(int id) {
    Registro24229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
