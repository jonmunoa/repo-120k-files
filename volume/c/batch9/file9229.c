// fichero 9229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9229;

Registro9229 crear_registro9229(int id) {
    Registro9229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
