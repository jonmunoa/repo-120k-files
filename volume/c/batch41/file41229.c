// fichero 41229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41229;

Registro41229 crear_registro41229(int id) {
    Registro41229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
